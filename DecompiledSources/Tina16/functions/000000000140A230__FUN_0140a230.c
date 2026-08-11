/* Ghidra address: 0140a230 */
/* Ghidra symbol: FUN_0140a230 */


void FUN_0140a230(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  char cVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(char *)(param_1 + 0x710) = cVar2;
    if (cVar2 == '\0') {
      puVar1 = *(ushort **)(param_1 + 0x708);
      FUN_01408bc0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x720),
                   *(undefined4 *)(param_1 + 0x738));
      FUN_00409a70(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(puVar1 + 4),(uint)*puVar1 * 2);
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0),param_2);
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FUN_00724420(*(undefined8 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x740));
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0xa8))(*(longlong **)(param_1 + 0x6f0));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f0),local_20);
    FUN_013a6b20(local_20[0],param_1 + 0x718,0x10);
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f0),&local_30);
    FUN_00441640(&local_28,local_30);
    FUN_00414ad0(param_1 + 0x740,local_28);
  }
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

