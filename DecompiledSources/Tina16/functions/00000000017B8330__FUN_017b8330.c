/* Ghidra address: 017b8330 */
/* Ghidra symbol: FUN_017b8330 */


undefined4 FUN_017b8330(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_2 + 200))(param_2,puVar2);
  uVar1 = (**(code **)*puVar2)(puVar2);
  FUN_00410f20(puVar2);
  return uVar1;
}

