/* Ghidra address: 01c746c0 */
/* Ghidra symbol: FUN_01c746c0 */


void FUN_01c746c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar2 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar2 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98210(uVar3,&local_38);
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      cVar1 = (**(code **)(*param_2 + 0x90))(param_2,uVar3,&local_38);
      if (cVar1 == '\0') {
        uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        (**(code **)(*param_2 + 0x68))(param_2,uVar3,&local_48);
        if (local_30 < local_40) {
          iVar4 = (local_40 - local_30) + 0x32;
        }
        if (local_48 < local_38) {
          iVar4 = (local_48 - local_38) + -0x32;
        }
        if (local_2c < local_3c) {
          iVar5 = (local_3c - local_2c) + 0x32;
        }
        if (local_44 < local_34) {
          iVar5 = (local_44 - local_34) + -0x32;
        }
        if ((iVar4 != 0) || (iVar5 != 0)) {
          FUN_00b95860(&local_38,iVar4,iVar5);
          FUN_01c74990(param_1,local_38,local_34,local_30,local_2c);
        }
      }
    }
  }
  return;
}

