/* Ghidra address: 015eed30 */
/* Ghidra symbol: FUN_015eed30 */


void FUN_015eed30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_015eb6b0(&DAT_015eb3e8,1);
  local_11 = FUN_015ec0a0(local_10,param_1);
  if (local_11 == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Compilation failed");
    FUN_004134c0(uVar1);
  }
  FUN_00410f20(local_10);
  return;
}

