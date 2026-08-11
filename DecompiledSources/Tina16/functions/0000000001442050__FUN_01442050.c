/* Ghidra address: 01442050 */
/* Ghidra symbol: FUN_01442050 */


void FUN_01442050(char *param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 local_120 [256];
  undefined8 local_20;
  
  local_20 = 0;
  puVar1 = (undefined2 *)FUN_004095c0(0xa0);
  if (puVar1 == (undefined2 *)0x0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    (**(code **)(*param_2 + 0x288))(param_2,&local_20);
    FUN_00416910(local_120,local_20,0xff);
    FUN_00415020(puVar1 + 1,local_120,0x28);
    if ((*(char *)(param_3 + 0xb4) == '\x01') && (*(char *)(puVar1 + 1) == '\0')) {
      FUN_00ef4840(2);
    }
    FUN_019b7680(puVar1 + 1,param_3);
    *(undefined2 **)(param_1 + 0xa8) = puVar1;
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
    *puVar1 = *(undefined2 *)(param_3 + 0x10);
    *(undefined8 *)(puVar1 + 0x34) = 0;
    puVar2 = (undefined8 *)FUN_01cfd6a0(param_2);
    *(undefined8 *)(puVar1 + 0x20) = *puVar2;
    if (*PTR_DAT_020052b8 == '\0') {
      *(undefined1 *)(puVar1 + 0x1c) = 0;
    }
    else if (*(char *)(param_3 + 0xb4) == '\x01') {
      *(undefined1 *)(puVar1 + 0x1c) = 0;
    }
    else {
      if (*param_1 == '\r') {
        *param_1 = '\x0f';
      }
      else if (*param_1 == '\x0e') {
        *param_1 = '\x10';
      }
      *(undefined1 *)(puVar1 + 0x1c) = 2;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x24) = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      *(undefined8 *)(puVar1 + 0x2c) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x34) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0;
      *(undefined8 *)(puVar1 + 0x3c) = 0;
      *(undefined8 *)(puVar1 + 0x40) = 0;
      *(undefined8 *)(puVar1 + 0x44) = 0;
      *(undefined8 *)(puVar1 + 0x48) = 0;
      *(undefined8 *)(puVar1 + 0x4c) = 0;
    }
  }
  FUN_00414480(&local_20);
  return;
}

