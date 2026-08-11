/* Ghidra address: 00f58060 */
/* Ghidra symbol: FUN_00f58060 */


void FUN_00f58060(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  if ((char)param_4 == '\x06') {
    uVar2 = FUN_016ed780(param_3,param_4);
    cVar1 = FUN_00f57cd0(param_3,uVar2,*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_30);
    if (cVar1 == '\0') {
      FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 8),0);
      local_31 = 0;
      uVar2 = FUN_016ebdc0(param_2);
      FUN_01d04b50(uVar2,&local_31);
    }
    else if (cVar1 == '\x01') {
      FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 0x10),0);
      local_31 = 1;
      uVar2 = FUN_016ebdc0(param_2);
      FUN_01d04b50(uVar2,&local_31);
    }
    else if (cVar1 == '\x02') {
      if (param_1[0x31] == '\0') {
        FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 8),0);
      }
      else {
        FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 0x10),0);
      }
    }
    FUN_016ed960(param_2,param_3,local_30[0],0);
  }
  else if (param_1[0x31] == '\0') {
    FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 8),0);
  }
  else {
    FUN_016ed320(param_2,*param_1,0,*(undefined8 *)(param_1 + 0x10),0);
  }
  return;
}

