/* Ghidra address: 0199e010 */
/* Ghidra symbol: FUN_0199e010 */


void FUN_0199e010(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulonglong local_58;
  ulonglong uStack_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  plVar2 = (longlong *)FUN_0198d430(param_1);
  (**(code **)(*plVar2 + 0x30))
            (plVar2,DAT_02110780 & 0xffffffff,DAT_02110780._4_4_,DAT_02110788 & 0xffffffff,
             DAT_02110788._4_4_);
  plVar2 = (longlong *)FUN_0198d430(param_1);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
    if (iVar1 == 2) {
      (**(code **)(*param_2 + 0x1f0))(param_2,0,&local_2c,&local_34);
      (**(code **)(*param_2 + 0x1f0))(param_2,1,&local_30,&local_38);
      (**(code **)(*param_2 + 0x68))(param_2,*(undefined8 *)(param_1 + 0x210),&local_48);
      uVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
      if ((byte)uVar3 < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 10U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if (local_34 < local_38) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = -1;
        }
        plVar2 = (longlong *)FUN_0198d430(param_1);
        iVar1 = (int)cVar4;
        (**(code **)(*plVar2 + 0x40))(plVar2,local_48 + -7,local_34 + iVar1 * 0xf);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_48 + -7,local_38 + iVar1 * -0xf);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_48 + -4,local_38 + iVar1 * -0x12);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x40))(plVar2,local_48 + -10,local_38 + iVar1 * -0x12);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_48 + -7,local_38 + iVar1 * -0xf);
        FUN_004238d0(&local_58,local_48 + -10,local_44 + 0xf,local_48 + -4,local_3c + -0xf);
        DAT_02110780 = local_58;
        DAT_02110788 = uStack_50;
      }
      else {
        if (local_2c < local_30) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = -1;
        }
        plVar2 = (longlong *)FUN_0198d430(param_1);
        iVar1 = (int)cVar4;
        (**(code **)(*plVar2 + 0x40))(plVar2,local_2c + iVar1 * 0xf,local_44 + -7);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_30 + iVar1 * -0xf,local_44 + -7);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_30 + iVar1 * -0x12,local_44 + -10);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x40))(plVar2,local_30 + iVar1 * -0x12,local_44 + -4);
        plVar2 = (longlong *)FUN_0198d430(param_1);
        (**(code **)(*plVar2 + 0x48))(plVar2,local_30 + iVar1 * -0xf,local_44 + -7);
        FUN_004238d0(&local_58,local_48 + 0xf,local_44 + -10,local_40 + -0xf,local_44 + -4);
        DAT_02110780 = local_58;
        DAT_02110788 = uStack_50;
      }
    }
  }
  return;
}

