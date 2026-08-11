/* Ghidra address: 0156c410 */
/* Ghidra symbol: FUN_0156c410 */


void FUN_0156c410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  if ((*(uint *)(param_1 + 0x7e8) != 0) && ((*(uint *)(param_1 + 0x7e8) & 0x20) == 0)) {
    FUN_0156c0d0(param_1,param_2,param_3,param_4);
    if (0 < *(int *)(param_1 + 0xa6c)) {
      cVar1 = _SC_InitNodes(param_3,*(undefined8 *)(param_1 + 0xa50),
                            *(undefined8 *)(param_1 + 0xa58),*(undefined4 *)(param_1 + 0xa68),
                            *(int *)(param_1 + 0xa6c),*(undefined4 *)(param_1 + 0x7dc),&local_10);
      if (cVar1 == '\0') {
        FUN_004167a0(local_20,local_10);
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
        FUN_004134c0(uVar2);
      }
      _SC_InitTypes(param_3,*(undefined8 *)(param_1 + 0xa58),*(undefined8 *)(param_1 + 0xa60),
                    *(undefined4 *)(param_1 + 0xa6c));
    }
  }
  FUN_00414480(local_20);
  return;
}

