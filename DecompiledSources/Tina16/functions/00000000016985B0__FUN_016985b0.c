/* Ghidra address: 016985b0 */
/* Ghidra symbol: FUN_016985b0 */


undefined4 * FUN_016985b0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar3,0xd0,0);
  *puVar3 = 0x104;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  iVar1 = FUN_00414ce0(param_1);
  uVar4 = FUN_00409570(iVar1 + 1);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  uVar2 = FUN_00414ce0(param_1);
  FUN_00442450(uVar4,param_1,uVar2);
  FUN_004095f0(param_1);
  return puVar3;
}

