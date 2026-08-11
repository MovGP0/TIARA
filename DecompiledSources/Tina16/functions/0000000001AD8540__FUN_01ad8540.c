/* Ghidra address: 01ad8540 */
/* Ghidra symbol: FUN_01ad8540 */


void FUN_01ad8540(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = FUN_01acff30(param_1,local_20);
  if (cVar2 == '\x01') {
    uVar1 = FUN_004aeac0(local_20[0],0);
    FUN_01ad85f0(param_1,uVar1,0);
    uVar1 = FUN_004aeac0(local_20[0],0);
    cVar2 = FUN_01ad1090(param_1,uVar1,&local_28);
    if (cVar2 != '\0') {
      FUN_01ce4cd0(local_28,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
      FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),local_28);
      FUN_01ae5650(param_1);
    }
    FUN_00410f20(local_20[0]);
  }
  else {
    FUN_00410f20(local_20[0]);
  }
  return;
}

