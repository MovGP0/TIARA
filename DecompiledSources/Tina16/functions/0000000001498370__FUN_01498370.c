/* Ghidra address: 01498370 */
/* Ghidra symbol: FUN_01498370 */


void FUN_01498370(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 local_2c [12];
  
  cVar2 = '\x01';
  cVar1 = FUN_01497210(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xbb0) + 0x28) == '\0') {
      cVar2 = FUN_01499d20(param_1);
    }
    if (cVar2 != '\0') {
      cVar1 = FUN_0198c540(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),5,local_2c);
      if (cVar1 != '\0') {
        FUN_01498400(param_1,param_2);
      }
      FUN_01498190(param_1);
      FUN_00805200(param_1);
    }
  }
  return;
}

