/* Ghidra address: 009d4140 */
/* Ghidra symbol: FUN_009d4140 */


void FUN_009d4140(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_00982d80(&PTR_FUN_009242d0,1,0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = FUN_009806b0(&PTR_FUN_00921d88,1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_00974380(&PTR_FUN_009228b8,1,0);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = FUN_00974f30(&PTR_FUN_00922d80,1,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = FUN_009949d0(&PTR_FUN_00927d88,1,0);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar2 = FUN_009d4120(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x88))(*(longlong **)(param_1 + 0x20),uVar2);
    FUN_00982fc0(*(undefined8 *)(param_1 + 0x20),1);
    FUN_00982fd0(*(undefined8 *)(param_1 + 0x20),1);
    FUN_00982fe0(*(undefined8 *)(param_1 + 0x20),1);
    lVar1 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(lVar1 + 0x98) = 0;
    lVar1 = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x90) = 1;
    *(undefined1 *)(lVar1 + 0xa1) = 0;
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x78) = 1;
    *(undefined1 *)(lVar1 + 0x79) = 1;
    *(undefined1 *)(lVar1 + 0x7b) = 1;
    *(undefined1 *)(lVar1 + 0x7c) = 1;
    *(undefined1 *)(lVar1 + 0x7d) = 0;
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar1 + 0x80) = param_1;
    *(code **)(lVar1 + 0x78) = FUN_009d49f0;
  }
  return;
}

