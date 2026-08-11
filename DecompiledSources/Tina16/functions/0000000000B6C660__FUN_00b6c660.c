/* Ghidra address: 00b6c660 */
/* Ghidra symbol: FUN_00b6c660 */


int FUN_00b6c660(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2038 [4032];
  undefined1 local_1078;
  undefined1 local_78;
  
  local_78 = 0;
  local_1078 = 0;
  FUN_0040d200(local_2038,0x2000,0);
  iVar3 = 0;
  for (iVar4 = (int)((param_4 & 0xffffffff) / 0x2000); iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_2038,0x2000);
    iVar3 = iVar3 + iVar2;
    (**(code **)(*param_1 + 200))(param_1,local_2038,local_2038,iVar2);
    (**(code **)(*param_3 + 0x20))(param_3,local_2038,iVar2);
  }
  uVar1 = (param_4 & 0xffffffff) % 0x2000;
  if ((int)uVar1 != 0) {
    iVar4 = (**(code **)(*param_2 + 0x18))(param_2,local_2038,uVar1);
    iVar3 = iVar3 + iVar4;
    (**(code **)(*param_1 + 200))(param_1,local_2038,local_2038,iVar4);
    (**(code **)(*param_3 + 0x20))(param_3,local_2038,iVar4);
  }
  return iVar3;
}

