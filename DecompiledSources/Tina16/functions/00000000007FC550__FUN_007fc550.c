/* Ghidra address: 007fc550 */
/* Ghidra symbol: FUN_007fc550 */


void FUN_007fc550(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0x2800ab;
  FUN_00806af0(param_1,0);
  FUN_00806b40(param_1,0);
  FUN_0064cbf0(param_1,0x140);
  FUN_0064cc50(param_1,0xf0);
  *(undefined1 *)((longlong)param_1 + 0x524) = 1;
  plVar2 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  param_1[0x9e] = (longlong)plVar2;
  uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,0x31);
  (**(code **)(*plVar2 + 0x88))(plVar2,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,0x32);
  (**(code **)(*(longlong *)param_1[0x9e] + 0x70))((longlong *)param_1[0x9e],uVar1);
  lVar3 = param_1[0x9e];
  *(longlong **)(lVar3 + 0x20) = param_1;
  *(code **)(lVar3 + 0x18) = FUN_007fd980;
  *(undefined1 *)((longlong)param_1 + 0x4d7) = 2;
  lVar3 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  param_1[0x9c] = lVar3;
  FUN_0064b200(lVar3,param_1);
  *(undefined1 *)(param_1 + 0x9a) = 7;
  *(undefined1 *)((longlong)param_1 + 0x4d1) = 2;
  *(undefined1 *)((longlong)param_1 + 0x4d2) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 3;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(DAT_02012670 + 0x98);
  lVar3 = FUN_0080fa60(&PTR_FUN_007ee060,1,param_1);
  param_1[0xd1] = lVar3;
  *(longlong **)(lVar3 + 0x30) = param_1;
  *(code **)(lVar3 + 0x28) = FUN_00806bc0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4db) = 1;
  param_1[0x25] = *param_1;
  *(undefined1 *)((longlong)param_1 + 0x631) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  FUN_007fdf50(param_1,0);
  FUN_0064e0c0(param_1,0);
  FUN_0064df70(param_1,0);
  (**(code **)(*param_1 + 0x238))(param_1,0);
  FUN_0065bb80(param_1,1);
  FUN_00808150(DAT_02012670,param_1);
  *(undefined4 *)((longlong)param_1 + 0x674) = 10;
  return;
}

