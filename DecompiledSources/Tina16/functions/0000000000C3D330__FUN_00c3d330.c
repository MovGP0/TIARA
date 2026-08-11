/* Ghidra address: 00c3d330 */
/* Ghidra symbol: FUN_00c3d330 */


undefined8 * FUN_00c3d330(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_00c3d2f0(param_1,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 *)param_2 = 0;
    *(undefined2 *)((longlong)param_2 + 0x15) = 0x8001;
    *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  }
  else {
    puVar3 = param_2;
    for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar1;
    *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar1 + 4);
  }
  return param_2;
}

