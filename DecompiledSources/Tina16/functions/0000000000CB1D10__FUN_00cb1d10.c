/* Ghidra address: 00cb1d10 */
/* Ghidra symbol: FUN_00cb1d10 */


void FUN_00cb1d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)param_1[0x22];
  puVar2 = param_2;
  if (puVar1 != param_2) {
    for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[0x22]) {
      if (puVar2 == param_1) {
        FUN_0041ddd0(&local_10,PTR_PTR_02004788);
        FUN_00410ae0(*param_1,&local_28);
        local_20 = local_28;
        local_18 = 0x11;
        puVar1 = (undefined8 *)FUN_0044d530(&PTR_FUN_00cb0ee8,1,local_10,&local_20,0);
        puVar2 = (undefined8 *)FUN_004134c0();
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_004d2d90();
    }
    param_1[0x22] = param_2;
    if (param_2 != (undefined8 *)0x0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

