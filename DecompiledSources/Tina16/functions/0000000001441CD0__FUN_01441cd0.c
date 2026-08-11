/* Ghidra address: 01441cd0 */
/* Ghidra symbol: FUN_01441cd0 */


void FUN_01441cd0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 local_130 [256];
  undefined8 local_30 [2];
  char *local_20;
  
  local_30[0] = 0;
  puVar2 = (undefined2 *)FUN_004095c0(0xa0);
  if (puVar2 == (undefined2 *)0x0) {
    FUN_00ef4260(1,param_3);
    goto LAB_01442010;
  }
  (**(code **)(*param_2 + 0x288))(param_2,local_30);
  FUN_00416910(local_130,local_30[0],0xff);
  FUN_00415020(puVar2 + 1,local_130,0x28);
  if ((*(char *)(param_3 + 0xb4) == '\x01') && (*(char *)(puVar2 + 1) == '\0')) {
    FUN_00ef4840(2);
  }
  FUN_019b7680(puVar2 + 1,param_3);
  *(undefined2 **)(param_1 + 0xa8) = puVar2;
  *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
  *puVar2 = *(undefined2 *)(param_3 + 0x10);
  *(undefined8 *)(puVar2 + 0x34) = 0;
  local_20 = (char *)FUN_01cfd6a0(param_2);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)local_20;
  FUN_00b909d0(&local_20,0x10);
  cVar1 = *local_20;
  *(char *)(puVar2 + 0x1c) = cVar1;
  if (cVar1 < '\x05') {
    if (cVar1 == '\x04') {
LAB_01441e99:
      *(undefined8 *)(puVar2 + 0x20) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x24) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x10);
      goto LAB_01442010;
    }
    if (cVar1 == '\x01') {
      *(undefined8 *)(puVar2 + 0x20) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      goto LAB_01442010;
    }
    if (cVar1 == '\x02') {
      *(undefined8 *)(puVar2 + 0x20) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      goto LAB_01442010;
    }
    if (cVar1 == '\x03') {
      *(undefined8 *)(puVar2 + 0x2c) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x10);
      *(undefined8 *)(puVar2 + 0x3c) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x18);
      *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x20);
      *(undefined8 *)(puVar2 + 0x44) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x28);
      *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x30);
      *(undefined8 *)(puVar2 + 0x4c) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x38);
      *(undefined8 *)(puVar2 + 0x34) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x40);
      goto LAB_01442010;
    }
  }
  else {
    if (cVar1 == '\x05') {
      *(undefined8 *)(puVar2 + 0x20) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x24) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 0x10);
      goto LAB_01442010;
    }
    if (cVar1 == '\x06') {
      *(undefined8 *)(puVar2 + 0x20) = **(undefined8 **)(local_20 + 1);
      *(undefined8 *)(puVar2 + 0x24) = *(undefined8 *)(*(longlong *)(local_20 + 1) + 8);
      goto LAB_01442010;
    }
    if (cVar1 == '\a') goto LAB_01441e99;
  }
  *(longlong **)(param_3 + 0xb20) = param_2;
  FUN_00ef4260(7,param_3);
LAB_01442010:
  FUN_00414480(local_30);
  return;
}

