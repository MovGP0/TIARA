/* Ghidra address: 00985780 */
/* Ghidra symbol: FUN_00985780 */


undefined1 FUN_00985780(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  puVar1 = auStack_58;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"DOMImplementation not specified.");
    FUN_004134c0(uVar2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (param_4 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Destination stream not specified.");
    FUN_004134c0(uVar2);
  }
  if (param_2 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Source node not specified.");
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x78));
  if (*(char *)(param_1 + 0xa0) == '\0') {
    FUN_00978510(*(undefined8 *)(param_1 + 0x98),param_3);
  }
  else {
    FUN_008e6230(&PTR_FUN_008d2398,&local_38);
    FUN_00978510(*(undefined8 *)(param_1 + 0x98),local_38);
  }
  local_20 = FUN_0096db20(&PTR_FUN_00919388,1,param_4,*(undefined4 *)(param_1 + 0x90));
  FUN_0096dde0(local_20,*(undefined1 *)(param_1 + 0xb0));
  FUN_009785e0(*(undefined8 *)(param_1 + 0x98),local_20);
  local_21 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x138))
                       (*(longlong **)(param_1 + 0x88),param_2);
  FUN_009785e0(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return local_21;
}

