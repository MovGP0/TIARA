/* Ghidra address: 01cc6730 */
/* Ghidra symbol: FUN_01cc6730 */


uint FUN_01cc6730(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined1 local_30 [8];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_3c = param_3;
  FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x438),0);
  uVar2 = 0;
  do {
    uVar3 = (uint)(local_3c + param_4) >> 1;
    (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x48))
              (*(longlong **)(lVar1 + 0x438),(uVar3 - uVar2) * param_5,1);
    (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x18))(*(longlong **)(lVar1 + 0x438),local_30,8);
    (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x48))(*(longlong **)(lVar1 + 0x438),0xfffffff8,1)
    ;
    dVar4 = (double)FUN_01cc6710(auStack_68);
    if (dVar4 < 0.0) {
      param_4 = uVar3 - 1;
    }
    else {
      local_3c = uVar3 + 1;
    }
    uVar2 = uVar3;
  } while (local_3c <= param_4);
  uVar2 = (uint)(local_3c + param_4) >> 1;
  (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x48))
            (*(longlong **)(lVar1 + 0x438),(uVar2 - uVar3) * param_5,1);
  return uVar2;
}

