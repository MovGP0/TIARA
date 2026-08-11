/* Ghidra address: 014407c0 */
/* Ghidra symbol: FUN_014407c0 */


void FUN_014407c0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_120 [256];
  undefined8 local_20;
  
  local_20 = 0;
  puVar2 = (undefined2 *)FUN_004095c0(0x40);
  if (puVar2 == (undefined2 *)0x0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    *(undefined2 **)(param_1 + 0xa8) = puVar2;
    *(undefined1 *)(puVar2 + 1) = 0;
    (**(code **)(*param_2 + 0x288))(param_2,&local_20);
    FUN_00416910(local_120,local_20,0xff);
    FUN_00415020(puVar2 + 8,local_120,0x28);
    cVar1 = FUN_01cfd030(param_2,0);
    if (cVar1 == '\x03') {
      puVar4 = (undefined8 *)FUN_01cfd6a0(param_2);
      *(undefined8 *)(puVar2 + 4) = *puVar4;
    }
    else if (cVar1 == '\x06') {
      puVar4 = (undefined8 *)FUN_01cfd6a0(param_2);
      *(undefined8 *)(puVar2 + 4) = *puVar4;
    }
    else if (cVar1 == '\v') {
      lVar3 = FUN_01cfd6a0(param_2);
      if (*(char *)(lVar3 + 0x40) == '\0') {
        *(undefined8 *)(puVar2 + 4) = **(undefined8 **)(lVar3 + 0x18);
      }
    }
    else if (cVar1 == '\r') {
      puVar4 = (undefined8 *)FUN_01cfd6a0(param_2);
      *(undefined8 *)(puVar2 + 4) = *puVar4;
    }
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
    *puVar2 = *(undefined2 *)(param_3 + 0x10);
  }
  FUN_00414480(&local_20);
  return;
}

