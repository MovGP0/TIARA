/* Ghidra address: 0060d5c0 */
/* Ghidra symbol: FUN_0060d5c0 */


void FUN_0060d5c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  
  local_50 = auStack_78;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005fa910);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
    if (cVar2 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      FUN_0041b800(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        uVar3 = FUN_00608c80(&PTR_FUN_005f92e8,1);
        *(undefined8 *)(param_1 + 0x50) = uVar3;
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),param_2);
      FUN_0060da90(param_1);
      FUN_0060e470(param_1,0);
    }
  }
  else {
    local_40 = param_2;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      uVar3 = FUN_0041b800(param_1 + 0x60);
      (**(code **)(*DAT_02011f90 + 0x90))(DAT_02011f90,*(undefined8 *)(local_40 + 0x60),0,uVar3);
    }
    if (*(longlong *)(local_40 + 0x50) != 0) {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        uVar3 = FUN_00608c80(&PTR_FUN_005f92e8,1);
        *(undefined8 *)(param_1 + 0x50) = uVar3;
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                (*(longlong **)(param_1 + 0x50),*(undefined8 *)(local_40 + 0x50));
    }
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(local_40 + 0x6c);
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(local_40 + 0x74);
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(local_40 + 0x68);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(local_40 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(local_40 + 0x4c);
    FUN_004b9ec0(*(undefined8 *)(param_1 + 0x58));
    FUN_004b6dc0(*(undefined8 *)(param_2 + 0x58),0);
    puVar1 = *(undefined8 **)(param_2 + 0x58);
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_004b8ba0(*(undefined8 *)(param_1 + 0x58),puVar1,uVar3);
    *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  }
  return;
}

