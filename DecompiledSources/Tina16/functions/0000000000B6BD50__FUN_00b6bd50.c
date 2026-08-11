/* Ghidra address: 00b6bd50 */
/* Ghidra symbol: FUN_00b6bd50 */


void FUN_00b6bd50(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_2038 [4064];
  undefined1 local_1058;
  undefined1 local_58;
  
  local_58 = 0;
  local_1058 = 0;
  FUN_0040d200(local_2038,0x2000,0);
  for (iVar3 = (int)((param_3 & 0xffffffff) / 0x2000); iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_2038,0x2000);
    (**(code **)(*param_1 + 0xc0))(param_1,local_2038,uVar2);
  }
  uVar1 = (param_3 & 0xffffffff) % 0x2000;
  if ((int)uVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_2038,uVar1);
    (**(code **)(*param_1 + 0xc0))(param_1,local_2038,uVar2);
  }
  return;
}

