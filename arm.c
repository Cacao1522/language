//------------------------------------------------------------------------------
//  �萔��`(�ύX�s�v)
//------------------------------------------------------------------------------
#define DEG_TO_RAD(deg)		(((M_PI / 1800.0) * (deg)))		//	�p�x(0.1�x)���烉�W�A���ւ̕ϊ�
#define RAD_TO_DEG(rad)		(((1800.0 / M_PI) * (rad)))		//	���W�A������p�x(0.1�x)�ւ̕ϊ�

//------------------------------------------------------------------------------
//  �\���̒�`(�ύX�s�v)
//------------------------------------------------------------------------------
//	���W
typedef struct
{
	double		x;			//	X���W(�P�ʁFmm)
	double		y;			//	Y���W(�P�ʁFmm)
} S_POSXY;

//	�A�[���ʒu���
typedef struct
{
	S_POSXY		middle;		//	���ԍ��W(�P�ʁFmm)
	S_POSXY		top;		//	��[���W(�P�ʁFmm)
	double		height;		//	�n���h����(�P�ʁFmm)
	double		handYaw;	//	�n���h�p�x(�P�ʁF0.1�x)
	double		handWidth;	//	�n���h��(�P�ʁFmm)
} S_ARM_LOCATION;

//------------------------------------------------------------------------------
//
//	�T	�v�F�ۑ�@�A�[���ւ̉�]�p�x�ݒ�
//
//	��	���Fid	1�`5:�A�[������ID
//			deg	�ݒ肵������]�p�x(0.1�x�P��)
//
//	�߂�l�F0		���펞
//			���l	�ُ펞
//
//------------------------------------------------------------------------------
int Arm_setRotate(BYTE id, short deg)
{
	BYTE	sendbuf[10] = { 0 };		//	�V���[�g�p�P�b�g
	BYTE	sum = 0;					//	�`�F�b�N�T��
	int i;

	//	�V���[�g�p�P�b�g�̍쐬
	sendbuf[0] = ;						//	�w�b�_
	sendbuf[1] = ;						//	�w�b�_
	sendbuf[2] = ;						//	���[�^�[ID
	sendbuf[3] = 0;						//	�t���O
	sendbuf[4] = ;						//	�A�h���X(Goal Position)
	sendbuf[5] = 2;						//	����
	sendbuf[6] = ;						//	�J�E���g
	sendbuf[7] = (deg)   0x00ff;		//	�f�[�^(L)
	sendbuf[8] = (deg >> 8)   0x00ff;	//	�f�[�^(H)

	//	�`�F�b�N�T���Z�o
	for (i = 2; i <= 8; i++)
	{
		sum ^= sendbuf[i];
	}
	sendbuf[9] = sum;

	//	���[�^�[�փp�P�b�g���M�v��
	if (Motor_sendPacket(sendbuf, 10) < 0)
	{
		return -1;
	}

	return 0;
}

//------------------------------------------------------------------------------
//
//	�T	�v�F�ۑ�A�A�[���ʒu���̎擾
//
//	��	���FdegArray	����	���[�^1�`5�̊p�x�B5���̔z��ƂȂ��Ă���B
//				degArray[0]	���[�^�[1�̊p�x(�P�ʁF0.1�x)
//				degArray[1]	���[�^�[2�̊p�x(�P�ʁF0.1�x)
//				degArray[2]	���[�^�[3�̊p�x(�P�ʁF0.1�x)
//				degArray[3]	���[�^�[4�̊p�x(�P�ʁF0.1�x)
//				degArray[4]	���[�^�[5�̊p�x(�P�ʁF0.1�x)
//			locInfo		�o��	���[�^�p�x���瓾��ꂽ�ʒu���̌���
//
//	�߂�l�F����I��	0
//			�ُ�I��	-1
// 
//------------------------------------------------------------------------------
int Arm_getLocInfo(short* degArray, S_ARM_LOCATION* locInfo)
{
	//	���ԍ��W�����߂�
	locInfo->middle.x = ;
	locInfo->middle.y = ;

	//	��[���W�����߂�
	locInfo->top.x = ;
	locInfo->top.y = ;

	//	�n���h���������߂�
	locInfo->height = ;

	//	�n���h�p�x�����߂�(X����0�x�Ƃ��čŏI�I�Ȍ������Z�o)
	locInfo->handYaw = ;

	//	�n���h�������߂�
	locInfo->handWidth = ;

	return 0;
}
