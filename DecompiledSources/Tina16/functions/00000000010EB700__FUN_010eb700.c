/* Ghidra address: 010eb700 */
/* Ghidra symbol: FUN_010eb700 */


void FUN_010eb700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,longlong *param_10,undefined8 param_11)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_10 == 0) {
    lVar1 = FUN_01cdf400(&DAT_01cdd500,1);
    *param_10 = lVar1;
    *(undefined1 *)(*param_10 + 0x58) = 0;
    *(undefined8 *)(*param_10 + 0x50) = param_11;
    *(undefined1 *)(*param_10 + 0x59) = 0;
    lVar1 = FUN_010ffc80(&PTR_FUN_010fdfc0,1);
    *(undefined8 *)(lVar1 + 0x60) = param_11;
    *(longlong *)(lVar1 + 0x68) = *param_10;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined1 *)(lVar1 + 0xf0) = 0;
    *(undefined1 *)(lVar1 + 0x70) = 0;
    FUN_00414480(lVar1 + 0xd8);
    FUN_00414480(lVar1 + 0xe0);
    *(undefined8 *)(lVar1 + 0xb8) = param_3;
    *(undefined8 *)(lVar1 + 0xc0) = param_4;
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xd0) = *(undefined8 *)(lVar1 + 0xc0);
    FUN_01cd6740(lVar1,param_5);
    FUN_01101340(lVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined1 *)(lVar1 + 0x160) = *(undefined1 *)(param_1 + 0x148);
    (**(code **)(**(longlong **)(*param_10 + 0x70) + 0x80))
              (*(longlong **)(*param_10 + 0x70),&DAT_010eba68,lVar1);
    lVar2 = FUN_010ffc80(&PTR_FUN_010fdfc0,1);
    *(undefined8 *)(lVar2 + 0x60) = param_11;
    *(longlong *)(lVar2 + 0x68) = *param_10;
    *(longlong *)(lVar2 + 0x158) = lVar1;
    *(undefined1 *)(lVar2 + 0xf0) = 1;
    *(undefined1 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = param_7;
    *(undefined8 *)(lVar2 + 0xc0) = param_8;
    *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0xc0);
    FUN_01cd6740(lVar2,param_9);
    FUN_01101250(lVar2,*(undefined8 *)(param_1 + 0x130));
    *(undefined1 *)(lVar2 + 0x160) = *(undefined1 *)(param_1 + 0x138);
    (**(code **)(**(longlong **)(lVar2 + 0x150) + 0x10))
              (*(longlong **)(lVar2 + 0x150),*(undefined8 *)(param_1 + 0x128));
    (**(code **)(**(longlong **)(*param_10 + 0x78) + 0x80))
              (*(longlong **)(*param_10 + 0x78),&DAT_010eba78,lVar2);
    *(longlong *)(lVar1 + 0x158) = lVar2;
    uVar3 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
    (**(code **)(**(longlong **)(*param_10 + 0x88) + 0x80))
              (*(longlong **)(*param_10 + 0x88),L"Grid",uVar3);
    lVar1 = (**(code **)(**(longlong **)(*param_10 + 0x88) + 0x30))
                      (*(longlong **)(*param_10 + 0x88),0);
    *(longlong *)(lVar1 + 0x78) = *param_10;
    uVar3 = (**(code **)(**(longlong **)(*param_10 + 0x88) + 0x30))
                      (*(longlong **)(*param_10 + 0x88),0);
    uVar4 = (**(code **)(**(longlong **)(*param_10 + 0x70) + 0x30))
                      (*(longlong **)(*param_10 + 0x70),0);
    uVar4 = FUN_004113f0(uVar4,&DAT_01ccbf00);
    FUN_01cd9880(uVar3,uVar4);
    uVar3 = (**(code **)(**(longlong **)(*param_10 + 0x88) + 0x30))
                      (*(longlong **)(*param_10 + 0x88),0);
    uVar4 = (**(code **)(**(longlong **)(*param_10 + 0x78) + 0x30))
                      (*(longlong **)(*param_10 + 0x78),0);
    uVar4 = FUN_004113f0(uVar4,&DAT_01ccbf00);
    FUN_01cd98a0(uVar3,uVar4);
  }
  return;
}

