/* Ghidra address: 01a7d1a0 */
/* Ghidra symbol: FUN_01a7d1a0 */


void FUN_01a7d1a0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_38 [24];
  
  bVar1 = *(byte *)(param_1 + 0x7a8);
  if (bVar1 < 0xd) {
    if (bVar1 == 0xc) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xae0),0);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      FUN_0064e140(param_1,0);
      goto LAB_01a7d437;
    }
    if (bVar1 == 6) {
LAB_01a7d294:
      iVar2 = *(int *)(param_1 + 0x1018);
      iVar3 = *(int *)(param_1 + 0x101c);
      FUN_00498350(local_38,0,0,0,0);
      FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar2,iVar3,iVar2 + *(int *)(param_1 + 0x1014),
                   iVar3 + *(int *)(param_1 + 0x1010),local_38);
      FUN_00410f20(*(undefined8 *)(param_1 + 0xff0));
      *(undefined8 *)(param_1 + 0xff0) = 0;
      FUN_00410f20(*(undefined8 *)(param_1 + 0xff8));
      *(undefined8 *)(param_1 + 0xff8) = 0;
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      FUN_0064e140(param_1,0);
      goto LAB_01a7d437;
    }
    if ((bVar1 != 7) && (bVar1 != 9)) {
      if (bVar1 == 10) {
        FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                     *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                     *(undefined4 *)(param_1 + 0x774));
        (**(code **)(**(longlong **)(param_1 + 0xfe0) + 0xe8))(*(longlong **)(param_1 + 0xfe0));
        *(undefined8 *)(param_1 + 0xfe0) = 0;
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
        *(undefined1 *)(param_1 + 0x7a8) = 0;
        goto LAB_01a7d437;
      }
LAB_01a7d418:
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      FUN_0064e140(param_1,0);
      goto LAB_01a7d437;
    }
  }
  else {
    if (bVar1 == 0xd) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xae8),0);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      FUN_0064e140(param_1,0);
      goto LAB_01a7d437;
    }
    if (bVar1 != 0xe) {
      if (bVar1 == 0xf) {
        FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                     *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                     *(undefined4 *)(param_1 + 0x774));
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
        *(undefined1 *)(param_1 + 0x7a8) = 0;
        FUN_0064e140(param_1,0);
        goto LAB_01a7d437;
      }
      if (bVar1 != 0x10) goto LAB_01a7d418;
      goto LAB_01a7d294;
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xfe0));
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xfe8));
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  FUN_0064e140(param_1,0);
LAB_01a7d437:
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_01ad0970(*(longlong *)(param_1 + 0x798));
  }
  return;
}

