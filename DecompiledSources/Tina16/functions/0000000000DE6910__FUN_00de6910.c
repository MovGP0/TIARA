/* Ghidra address: 00de6910 */
/* Ghidra symbol: FUN_00de6910 */


undefined1 FUN_00de6910(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_10;
  char local_f;
  char local_e;
  undefined1 local_d;
  int local_c;
  
  local_20 = auStack_48;
  local_c = FUN_004b6da0(param_2);
  FUN_004b6dc0(param_2,0);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_10,3);
  if (iVar1 == 3) {
    if (((local_10 == -1) && (local_f == '\n')) && (local_e == '\0')) {
      local_d = 1;
    }
    else {
      local_d = 0;
    }
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unable to read from stream.");
    FUN_004134c0(uVar2);
  }
  FUN_004b6dc0(param_2,(longlong)local_c);
  return local_d;
}

