/* Ghidra address: 016ab2d0 */
/* Ghidra symbol: FUN_016ab2d0 */


undefined8 * FUN_016ab2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 local_38 [24];
  
  dVar2 = (double)FUN_00c44590(param_2);
  if (dVar2 == 0.0) {
    puVar1 = (undefined8 *)(PTR_DAT_020025e0 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_020025e0;
    param_1[1] = *puVar1;
  }
  else {
    uVar3 = FUN_00c44590(param_2);
    FUN_00c44460(local_38,uVar3,0);
    FUN_00c44790(param_2,local_38,param_1);
  }
  return param_1;
}

