/* Ghidra address: 00724520 */
/* Ghidra symbol: FUN_00724520 */


undefined8 * FUN_00724520(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  FUN_00414480(param_2);
  if (param_3 != 0) {
    FUN_00416ba0(param_2,param_3,&LAB_00724598);
    uVar1 = FUN_00416740(*param_2);
    for (puVar2 = (undefined2 *)FUN_00442980(uVar1,0x7c); puVar2 != (undefined2 *)0x0;
        puVar2 = (undefined2 *)FUN_00442980(puVar2 + 1,0x7c)) {
      *puVar2 = 0;
    }
  }
  return param_2;
}

