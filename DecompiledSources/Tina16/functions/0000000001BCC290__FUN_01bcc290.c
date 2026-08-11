/* Ghidra address: 01bcc290 */
/* Ghidra symbol: FUN_01bcc290 */


void FUN_01bcc290(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_10 = 0;
  local_18 = 0;
  local_20 = (longlong *)0x0;
  cVar1 = FUN_00781870();
  if (cVar1 != '\0') {
    cVar1 = FUN_01bcaba0(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c8) & 4) != 0)) {
      FUN_00ddede0(param_1,&local_10,0xcb);
      if (local_10 != 0) {
        FUN_00ddede0(param_1,&local_20,0xcb);
        uVar3 = FUN_0041b800(&local_18);
        uVar2 = (**(code **)(*local_20 + 0x360))(local_20,uVar3);
        FUN_0041d630(uVar2);
        if (local_18 != 0) {
          FUN_00ddede0(param_1,&local_30,0xcb);
          uVar3 = FUN_0041b800(&local_28);
          uVar2 = (**(code **)(*local_30 + 0x360))(local_30,uVar3);
          FUN_0041d630(uVar2);
          uVar2 = (**(code **)(*local_28 + 0x1f0))
                            (local_28,*(undefined4 *)(*(longlong *)(param_1 + 0x588) + 0x494),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x580) + 0x494));
          FUN_0041d630(uVar2);
        }
      }
    }
  }
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return;
}

