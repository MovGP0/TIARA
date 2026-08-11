/* Ghidra address: 00985d90 */
/* Ghidra symbol: FUN_00985d90 */


void FUN_00985d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  int iVar2;
  wchar_t *local_18;
  undefined1 local_10;
  
  if (0 < *(int *)(param_4 + 0x10)) {
    local_18 = L"position";
    local_10 = 0x11;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar1 = FUN_0044d530(&PTR_FUN_00901df0,param_2,L"Arguments mismatch error in %s().",&local_18,0)
    ;
    in_RAX = FUN_004134c0(uVar1);
  }
  iVar2 = (int)param_2;
  if (iVar2 < 1) {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar1;
    uVar1 = FUN_0044d490(&PTR_FUN_00901df0,uVar1,L"Invalid context position.");
    in_RAX = FUN_004134c0(uVar1);
  }
  FUN_00990420(&PTR_FUN_00927180,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
               (double)iVar2);
  return;
}

