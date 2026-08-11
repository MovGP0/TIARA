/* Ghidra address: 01608f10 */
/* Ghidra symbol: FUN_01608f10 */


void FUN_01608f10(longlong *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_2 == 0x800) {
    cVar1 = FUN_01609090(local_res18[0]);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,&DAT_01609044);
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 0x98))(param_1,iVar2);
      }
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,&DAT_01609058);
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 0x98))(param_1,iVar2);
      }
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,L"xpsr");
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 0x98))(param_1,iVar2);
      }
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,L"CPSR");
      if (iVar2 == -1) {
        (**(code **)(*param_1 + 0x78))(param_1,L"CPSR");
      }
    }
  }
  FUN_00414480(local_res18);
  return;
}

