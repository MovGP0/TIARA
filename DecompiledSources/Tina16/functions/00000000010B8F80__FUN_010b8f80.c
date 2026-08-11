/* Ghidra address: 010b8f80 */
/* Ghidra symbol: FUN_010b8f80 */


undefined8 FUN_010b8f80(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar4 = 0;
  iVar5 = param_3 + 1;
  if ((-1 < iVar5) && (iVar5 < 8)) {
    uVar4 = 1;
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_38);
    local_30 = local_30 - local_38;
    uVar1 = (longlong)local_30 / 2 & 0xffffffff;
    local_2c = local_2c - local_34;
    uVar2 = (longlong)local_2c / 2 & 0xffffffff;
    if (iVar5 < 5) {
      if (iVar5 == 4) {
        uVar3 = FUN_00498310(local_30,uVar2);
        *(undefined8 *)param_4 = uVar3;
      }
      else if (param_3 == -1) {
        uVar3 = FUN_00498310(0,0);
        *(undefined8 *)param_4 = uVar3;
      }
      else if (param_3 == 0) {
        uVar3 = FUN_00498310(uVar1,0);
        *(undefined8 *)param_4 = uVar3;
      }
      else if (param_3 == 1) {
        uVar3 = FUN_00498310(local_30,0);
        *(undefined8 *)param_4 = uVar3;
      }
      else if (param_3 == 2) {
        uVar3 = FUN_00498310(0,uVar2);
        *(undefined8 *)param_4 = uVar3;
      }
    }
    else if (param_3 == 4) {
      uVar3 = FUN_00498310(0,local_2c);
      *(undefined8 *)param_4 = uVar3;
    }
    else if (param_3 == 5) {
      uVar3 = FUN_00498310(uVar1,local_2c);
      *(undefined8 *)param_4 = uVar3;
    }
    else if (param_3 == 6) {
      uVar3 = FUN_00498310(local_30,local_2c);
      *(undefined8 *)param_4 = uVar3;
    }
    *param_4 = *param_4 + local_38;
    param_4[1] = param_4[1] + local_34;
  }
  return uVar4;
}

