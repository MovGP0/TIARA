/* Ghidra address: 004d4580 */
/* Ghidra symbol: FUN_004d4580 */


undefined8 FUN_004d4580(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = 0;
  if (param_1[7] == 0) {
    if (DAT_01dc64f0 != (code *)0x0) {
      (*DAT_01dc64f0)(param_1);
    }
    if (param_1[7] == 0) {
      FUN_00410ae0(*param_1,&local_30);
      local_28 = local_30;
      local_20 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004724d0,1,PTR_PTR_02004bc0,&local_28,0);
      FUN_004134c0(uVar1);
    }
  }
  uVar1 = FUN_0041b800(param_2);
  (*(code *)**(undefined8 **)param_1[7])((undefined8 *)param_1[7],&DAT_004d4668,uVar1);
  FUN_00414480(&local_30);
  return param_2;
}

