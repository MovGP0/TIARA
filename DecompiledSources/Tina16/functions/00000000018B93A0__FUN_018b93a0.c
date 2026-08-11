/* Ghidra address: 018b93a0 */
/* Ghidra symbol: FUN_018b93a0 */


void FUN_018b93a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  
  lVar2 = FUN_018b8410(param_1);
  iVar1 = FUN_0043e420(*(undefined8 *)(lVar2 + 0x20),L"TfrxReportPage");
  if (iVar1 != 0) {
    iVar1 = FUN_0043e420(*(undefined8 *)(lVar2 + 0x20),L"TfrxDMPPage");
    if (iVar1 != 0) {
      local_19 = 0;
      goto LAB_018b93eb;
    }
  }
  local_19 = 1;
LAB_018b93eb:
  FUN_018b9090(auStack_48,param_2,lVar2);
  return;
}

