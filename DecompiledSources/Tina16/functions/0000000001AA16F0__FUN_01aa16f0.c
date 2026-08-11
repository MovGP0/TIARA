/* Ghidra address: 01aa16f0 */
/* Ghidra symbol: FUN_01aa16f0 */


undefined1 FUN_01aa16f0(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *local_20 [2];
  
  cVar2 = FUN_014f9c20(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,local_20);
    uVar1 = *local_20[0];
  }
  else {
    puVar3 = (undefined1 *)
             (**(code **)(*(longlong *)param_1[0x33] + 0x78))((longlong *)param_1[0x33]);
    uVar1 = *puVar3;
  }
  return uVar1;
}

