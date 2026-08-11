/* Ghidra address: 00680050 */
/* Ghidra symbol: FUN_00680050 */


void FUN_00680050(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_1[99] != 0) {
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x33e) != '\0')) {
      FUN_0064dd90(param_1,local_20);
      cVar2 = FUN_007f9a80(*(undefined2 *)(param_2 + 8),local_20[0]);
      if (cVar2 != '\0') {
        plVar1 = (longlong *)param_1[99];
        pcVar3 = (code *)FUN_00411550(plVar1,0xffb3);
        cVar2 = (*pcVar3)(plVar1);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 600))(plVar1);
          *(undefined8 *)(param_2 + 0x18) = 1;
        }
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

