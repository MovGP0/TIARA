/* Ghidra address: 00ef8680 */
/* Ghidra symbol: FUN_00ef8680 */


void FUN_00ef8680(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  FUN_00ef7f80(&local_30,3,param_2);
  FUN_00ef85a0(param_1,&local_30,
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x58) + (ulonglong)**(byte **)(param_1 + 0x50) * 0x200));
  FUN_00ef7f80(&local_30,4,param_2);
  bVar1 = 1;
  for (cVar2 = *(char *)(param_1 + 0x6f); cVar2 != '\0'; cVar2 = cVar2 + -1) {
    FUN_00ef7f80(&local_30,7,param_2);
    FUN_00ef7f80(&local_30,3,param_2);
    FUN_00ef85a0(param_1,&local_30,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x58) +
                   (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x50) + (ulonglong)bVar1) * 0x200 +
                  (ulonglong)bVar1 * 8));
    FUN_00ef7f80(&local_30,4,param_2);
    bVar1 = bVar1 + 1;
  }
  cVar2 = FUN_00ef83e0(param_1,*(undefined8 *)(param_1 + 0x50));
  if (cVar2 == '\0') {
    cVar2 = FUN_00ef8550(param_1,local_30);
    if (cVar2 == '\0') {
      FUN_00ef7f80(&local_38,5,param_2);
      FUN_00ef8230(&local_38,&local_30,param_2);
      FUN_00ef90b0(&local_38,param_2);
      FUN_00ef9c40(&local_38,param_2);
      FUN_00ef8230(*(undefined8 *)(param_1 + 0x80),&local_38,param_2);
    }
    else {
      FUN_00ef7f80(&local_38,5,param_2);
      FUN_00ef8230(&local_38,&local_30,param_2);
      FUN_00ef90b0(&local_38,param_2);
      FUN_00ef9c40(&local_38,param_2);
      FUN_00ef8230(*(undefined8 *)(param_1 + 0x88),&local_38,param_2);
    }
  }
  else {
    cVar2 = FUN_00ef8550(param_1,local_30);
    if (cVar2 == '\0') {
      FUN_00ef7f80(&local_38,6,param_2);
      FUN_00ef8230(&local_38,&local_30,param_2);
      FUN_00ef90b0(&local_38,param_2);
      FUN_00ef9c40(&local_38,param_2);
      FUN_00ef8230(*(undefined8 *)(param_1 + 0x80),&local_38,param_2);
    }
    else {
      FUN_00ef7f80(&local_38,6,param_2);
      FUN_00ef8230(&local_38,&local_30,param_2);
      FUN_00ef90b0(&local_38,param_2);
      FUN_00ef9c40(&local_38,param_2);
      FUN_00ef8230(*(undefined8 *)(param_1 + 0x88),&local_38,param_2);
    }
  }
  FUN_00ef81f0(&local_30);
  FUN_00ef81f0(&local_38);
  return;
}

