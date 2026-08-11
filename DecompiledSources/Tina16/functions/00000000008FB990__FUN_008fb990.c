/* Ghidra address: 008fb990 */
/* Ghidra symbol: FUN_008fb990 */


undefined1 FUN_008fb990(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  uVar2 = 0;
  if (local_res8[0] != 0) {
    uVar2 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  if (uVar2 == 0) {
    local_29 = 0;
  }
  else {
    local_29 = 1;
    uVar3 = uVar2;
    if (*(short *)(local_res8[0] + -2 + (longlong)(int)uVar2 * 2) == 0x2e) {
      uVar2 = uVar2 - 1;
      uVar3 = uVar2;
    }
    while ((0 < (int)uVar2 && (*(short *)(local_res8[0] + -2 + (longlong)(int)uVar2 * 2) != 0x2e)))
    {
      uVar2 = uVar2 - 1;
    }
    FUN_00416430(local_20,local_res8[0],uVar2 + 1,uVar3 - uVar2);
    cVar1 = FUN_008fbbe0(local_20[0]);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      do {
        if ((int)uVar2 < 1) goto LAB_008fbaa1;
        uVar3 = uVar2;
        if (*(short *)(local_res8[0] + -2 + (longlong)(int)uVar2 * 2) == 0x2e) {
          uVar2 = uVar2 - 1;
          uVar3 = uVar2;
        }
        while ((0 < (int)uVar2 &&
               (*(short *)(local_res8[0] + -2 + (longlong)(int)uVar2 * 2) != 0x2e))) {
          uVar2 = uVar2 - 1;
        }
        FUN_00416430(&local_28,local_res8[0],uVar2 + 1,uVar3 - uVar2);
        cVar1 = FUN_008fbb00(local_28);
      } while (cVar1 != '\0');
      local_29 = 0;
    }
  }
LAB_008fbaa1:
  FUN_004145c0(&local_28,2);
  FUN_00414520(local_res8);
  return local_29;
}

