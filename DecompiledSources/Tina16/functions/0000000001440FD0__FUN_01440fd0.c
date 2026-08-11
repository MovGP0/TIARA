/* Ghidra address: 01440fd0 */
/* Ghidra symbol: FUN_01440fd0 */


void FUN_01440fd0(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined1 local_130 [256];
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_30[0] = 0;
  pcVar1 = (char *)FUN_01cfde70(param_2,1,0,&local_19,&local_1a,&local_1b);
  if (*pcVar1 == '\0') {
    *param_1 = 0;
  }
  else {
    *param_1 = 9;
    puVar2 = (undefined2 *)FUN_004095c0(0x40);
    if (puVar2 == (undefined2 *)0x0) {
      FUN_00ef4260(1,param_3);
    }
    else {
      *(undefined2 **)(param_1 + 0xa8) = puVar2;
      *(undefined1 *)(puVar2 + 1) = 0;
      (**(code **)(*param_2 + 0x288))(param_2,local_30);
      FUN_00416910(local_130,local_30[0],0xff);
      FUN_00415020(puVar2 + 8,local_130,0x28);
      *(undefined8 *)(puVar2 + 4) = 0;
      *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
      *puVar2 = *(undefined2 *)(param_3 + 0x10);
    }
  }
  FUN_00414480(local_30);
  return;
}

