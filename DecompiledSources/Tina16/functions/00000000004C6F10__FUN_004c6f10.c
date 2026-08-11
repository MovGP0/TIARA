/* Ghidra address: 004c6f10 */
/* Ghidra symbol: FUN_004c6f10 */


void FUN_004c6f10(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_0058ada0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  FUN_004c6c50(param_1);
  bVar1 = **(byte **)(param_1 + 0x48);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      FUN_005894c0(local_20,*(undefined8 *)(param_1 + 0x48),uVar2);
      FUN_004c55e0(*(undefined8 *)(param_1 + 0x60),local_20[0]);
    }
    else if (bVar1 == 1) {
      FUN_004c6da0(param_1,*(undefined8 *)**(undefined8 **)(param_1 + 0x70),uVar2);
    }
    else if (bVar1 == 2) {
      FUN_004c47b0(*(undefined8 *)(param_1 + 0x60),uVar2);
    }
  }
  else if (bVar1 == 6) {
    FUN_004c6cd0(param_1,uVar2);
  }
  else if (bVar1 == 9) {
    FUN_004c47b0(*(undefined8 *)(param_1 + 0x60),uVar2);
  }
  FUN_00414480(local_20);
  return;
}

