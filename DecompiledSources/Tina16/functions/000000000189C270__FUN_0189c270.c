/* Ghidra address: 0189c270 */
/* Ghidra symbol: FUN_0189c270 */


void FUN_0189c270(longlong param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x7e1) = 1;
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if (cVar1 != '\0') {
    pcVar3 = (code *)FUN_00411550(param_1,0xffb1);
    (*pcVar3)(param_1,1);
  }
  uVar4 = FUN_0188d920();
  lVar5 = FUN_0188d190(uVar4);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x2f0))
            (*(longlong **)(param_1 + 0x720),*(undefined8 *)(lVar5 + 0x70));
  uVar4 = FUN_0188d920();
  uVar4 = FUN_0188d190(uVar4);
  iVar2 = FUN_0188b8b0(uVar4,*(undefined4 *)(*(longlong *)(param_1 + 2000) + 0x230));
  if (iVar2 == -1) {
    uVar4 = FUN_0188d920();
    uVar4 = FUN_0188d190(uVar4);
    iVar2 = FUN_0188b8b0(uVar4,0x100);
  }
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),iVar2);
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x238));
  FUN_0180d940(local_20,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_20[0]);
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x228));
  FUN_0180d940(&local_28,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_28);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))
            (*(longlong **)(param_1 + 0x740),
             CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 2000) >> 8),
                      *(char *)(*(longlong *)(param_1 + 2000) + 0x1b1) == '\0'));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),
             CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 2000) >> 8),
                      *(char *)(*(longlong *)(param_1 + 2000) + 0x1b1) == '\x01'));
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1a8));
  FUN_0180d940(&local_30,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_30);
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1c8));
  FUN_0180d940(&local_38,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),local_38);
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1e0));
  FUN_0180d940(&local_40,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),local_40);
  uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x178));
  FUN_0180d940(&local_48,uVar4);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_48);
  lVar5 = *(longlong *)(param_1 + 0x710);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  lVar5 = *(longlong *)(param_1 + 0x718);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  lVar5 = *(longlong *)(param_1 + 0x798);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  lVar5 = *(longlong *)(param_1 + 0x7a0);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  lVar5 = *(longlong *)(param_1 + 0x7a8);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  lVar5 = *(longlong *)(param_1 + 0x7b0);
  *(longlong *)(lVar5 + 0x400) = param_1;
  *(code **)(lVar5 + 0x3f8) = FUN_0189c220;
  FUN_0189ccf0(param_1,0);
  *(undefined1 *)(param_1 + 0x7e1) = 0;
  FUN_00414560(&local_48,6);
  return;
}

