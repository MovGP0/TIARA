/* Ghidra address: 00f2e480 */
/* Ghidra symbol: FUN_00f2e480 */


void FUN_00f2e480(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  puVar5 = (ushort *)**(undefined8 **)(param_1 + 0x48);
  uVar3 = 0;
  if (puVar5 != (ushort *)0x0) {
    uVar3 = *(uint *)(puVar5 + -2);
  }
  if ((int)uVar3 < 0) {
    uVar3 = FUN_00410a90();
  }
  puVar1 = puVar5 + uVar3;
  for (; puVar5 < puVar1; puVar5 = puVar5 + 1) {
    uVar3 = (uVar3 ^ *puVar5) * 0x1000193;
  }
  cVar2 = FUN_00f36100(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),uVar3);
  if (cVar2 == '\0') {
    FUN_00f35ca0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),uVar3,
                 **(undefined8 **)(param_1 + 0x48));
  }
  else {
    FUN_00f351c0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),local_20,uVar3);
    iVar4 = FUN_00416db0(local_20[0],**(undefined8 **)(param_1 + 0x48));
    if (iVar4 == 0) {
      FUN_00414ad0(*(undefined8 *)(param_1 + 0x48),local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

