/* Ghidra address: 016986c0 */
/* Ghidra symbol: FUN_016986c0 */


undefined4 * FUN_016986c0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = 0x155;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar2 = (undefined4 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30));
  puVar1[0x15] = *puVar2;
  puVar1[0x16] = puVar2[1];
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 2);
  FUN_004095f0(puVar2);
  return puVar1;
}

