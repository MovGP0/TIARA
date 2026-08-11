/* Ghidra address: 013324a0 */
/* Ghidra symbol: FUN_013324a0 */


double FUN_013324a0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    dVar2 = *(double *)(param_1 + 0x60) * 1000.0;
  }
  else {
    local_40[0] = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
    local_48 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
    local_50 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
    local_48 = FUN_0132d3c0(local_48,param_3);
    local_40[0] = FUN_0132d3c0(local_40[0],param_2);
    local_48 = FUN_0132d530(local_48,local_40[0],local_48);
    local_48 = FUN_0132d470(local_48,local_48,*(undefined8 *)(param_1 + 0x80));
    uVar1 = FUN_0132cf10(local_40[0],param_2,param_3);
    uVar1 = FUN_0132d3c0(local_40[0],uVar1);
    local_40[0] = FUN_0132d220(local_40[0],uVar1,local_48);
    FUN_0132d0b0(local_40[0],*(undefined8 *)(param_1 + 0xe8));
    dVar2 = (double)FUN_0132dd50(local_40[0]);
    if (*(char *)(param_1 + 0xf0) != '\0') {
      local_48 = FUN_0132d3c0(local_48,*(undefined8 *)(param_1 + 0xe0));
      local_48 = FUN_0132d470(local_48,local_48,*(undefined8 *)(param_1 + 0x80));
      local_50 = FUN_0132d220(local_50,*(undefined8 *)(param_1 + 0xe0),local_48);
      local_48 = FUN_0132d3c0(local_48,*(undefined8 *)(param_1 + 0xe0));
      local_40[0] = FUN_0132d3c0(local_40[0],param_2);
      local_48 = FUN_0132d530(local_48,local_40[0],local_48);
      local_48 = FUN_0132d470(local_48,local_48,*(undefined8 *)(param_1 + 0x80));
      uVar1 = FUN_0132cf10(local_40[0],param_2,*(undefined8 *)(param_1 + 0xe0));
      uVar1 = FUN_0132d3c0(local_40[0],uVar1);
      local_40[0] = FUN_0132d220(local_40[0],uVar1,local_48);
      FUN_0132d0b0(local_40[0],local_50);
      uVar1 = FUN_0132d6e0(local_40[0]);
      dVar2 = (double)FUN_00b90620(dVar2,uVar1);
    }
    FUN_0132cce0(local_40);
    FUN_0132cce0(&local_48);
    FUN_0132cce0(&local_50);
  }
  return dVar2;
}

