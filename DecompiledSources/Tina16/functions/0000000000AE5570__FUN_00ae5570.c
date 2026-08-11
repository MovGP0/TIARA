/* Ghidra address: 00ae5570 */
/* Ghidra symbol: FUN_00ae5570 */


void FUN_00ae5570(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_2 + 0x460))(param_2,param_3,*(undefined8 *)(param_1 + 0x48));
  FUN_00ad4730(param_1);
  do {
    cVar1 = *(char *)(param_1 + 0x44);
    if ((cVar1 == '\f') || (cVar1 == '\x04')) {
      FUN_00ad3070(param_1,local_20);
      (**(code **)(*param_3 + 0x2e8))
                (param_3,local_20[0],*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)
                );
      FUN_00414480(local_20);
      return;
    }
    if (cVar1 == '\v') {
      uVar2 = (**(code **)(*param_2 + 0x450))(param_2,param_3);
      FUN_00ae5570(param_1,param_2,uVar2,param_4);
    }
    else if (cVar1 == '\r') {
      (**(code **)(*param_2 + 0x458))(param_2,param_3,*(undefined8 *)(param_1 + 0x48),param_4);
    }
    else if (cVar1 == '\x0e') {
      do {
        FUN_00ad4730(param_1);
        if (*(char *)(param_1 + 0x44) == '\x0f') break;
      } while (*(char *)(param_1 + 0x44) != '\x04');
    }
    else if (cVar1 == '\x17') {
      FUN_00ada730(param_1,param_2 + 0xe1);
      FUN_00ad4730(param_1);
    }
    FUN_00ad4730(param_1);
  } while( true );
}

