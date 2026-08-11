/* Ghidra address: 01a61fe0 */
/* Ghidra symbol: FUN_01a61fe0 */


void FUN_01a61fe0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined8 local_30;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    local_32 = *(undefined2 *)(param_1 + 0x40);
    FUN_01d311c0(param_2,&local_32,2);
    FUN_01d311c0(param_2,param_1 + 0x80,1);
    local_38 = FUN_00b95a90(param_1 + 0x48);
    FUN_01d311c0(param_2,&local_38,4);
    FUN_01d311c0(param_2,param_1 + 0x50,8);
    FUN_01d311c0(param_2,param_1 + 0x58,8);
    FUN_01d311c0(param_2,param_1 + 0x60,8);
    FUN_01d311c0(param_2,param_1 + 0x68,8);
    local_32 = *(undefined2 *)(param_1 + 0x70);
    FUN_01d311c0(param_2,&local_32,2);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      local_34 = 0xffff;
    }
    else {
      local_34 = *(undefined2 *)(*(longlong *)(param_1 + 0x88) + 0x40);
    }
    FUN_01d311c0(param_2,&local_34,2);
    FUN_01d31d60(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
    plVar2 = (longlong *)FUN_01a61c20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0))
    ;
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)plVar2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
              & 0x39U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01d325e0(param_2,plVar2);
    }
    else {
      if (*(char *)(param_1 + 0x98) == '\x01') {
        (**(code **)(*plVar2 + 200))(plVar2,0,L"\\d(#Interpreter)");
      }
      FUN_01d320f0(param_2,plVar2);
    }
    uVar3 = FUN_00410f20(plVar2);
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
              & 0x39U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01d311c0(param_2,param_1 + 0x98,1);
    }
    FUN_01d313e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x90));
    FUN_01d31740(param_2,*(undefined1 *)(param_1 + 0x99));
    FUN_01d31740(param_2,*(undefined4 *)(param_1 + 0x9c));
    FUN_01d31740(param_2,*(undefined1 *)(param_1 + 0xa0));
    FUN_01d31740(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x98));
    local_30 = FUN_01d12280(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_30 = FUN_01d122a0(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_30 = FUN_01d122c0(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_30 = FUN_01d122e0(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_30 = FUN_01d12300(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_30 = FUN_01d12320(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_30,8);
    local_32 = FUN_01d12340(*(undefined8 *)(param_1 + 0x90));
    FUN_01d311c0(param_2,&local_32,2);
    FUN_01d31740(param_2,0xffffffff);
    FUN_01d31740(param_2,0xffffffff);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      local_34 = 0xffff;
    }
    else {
      local_34 = *(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x40);
    }
    FUN_01d311c0(param_2,&local_34,2);
    FUN_01d311c0(param_2,param_1 + 0xb0,8);
    FUN_01d311c0(param_2,param_1 + 0xb8,8);
    if (*(char *)(param_2 + 0x78) == '\0') {
      FUN_01d31630(param_2,*(undefined8 *)(param_1 + 0x78));
    }
  }
  return;
}

