/* Ghidra address: 0172d980 */
/* Ghidra symbol: FUN_0172d980 */


char FUN_0172d980(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res18 [2];
  ulonglong in_stack_fffffffffffffe70;
  longlong local_160;
  undefined1 local_14c [26];
  ushort local_132;
  longlong local_130;
  undefined1 local_128 [264];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar3 = FUN_0172bd70(&PTR_FUN_01729478,1,param_1,param_2,*(undefined8 *)PTR_DAT_02001f18,
                       in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_130);
  if (cVar2 == '\x04') {
    local_160 = local_130;
  }
  else if (cVar2 == '\a') {
    local_160 = local_130;
  }
  pcVar1 = *(char **)(local_160 + 0x26);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0172c500(lVar3,plVar4);
  cVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_res18[0]);
  if (-1 < cVar2) {
    FUN_004095f0(*(undefined8 *)(pcVar1 + 1),*(undefined2 *)(pcVar1 + 0x21));
    FUN_004095f0(*(undefined8 *)(pcVar1 + 9),*(undefined2 *)(pcVar1 + 0x23));
    FUN_004095f0(*(undefined8 *)(pcVar1 + 0x19),*(undefined2 *)(pcVar1 + 0x21));
    FUN_0172cfa0(lVar3,cVar2,pcVar1 + 1,pcVar1 + 9,pcVar1 + 0x19,pcVar1 + 0x21,pcVar1 + 0x23,
                 &local_132);
    *pcVar1 = cVar2;
    FUN_0172cc40(lVar3,local_132,*(undefined2 *)(pcVar1 + 0x21),*(undefined8 *)(pcVar1 + 1),
                 *(undefined8 *)(pcVar1 + 9),local_128,0xff);
    FUN_0172a910(*(undefined8 *)(lVar3 + 8),*(int *)(lVar3 + 0x14) + (uint)local_132 * 0x1a + 2);
    FUN_0172a920(*(undefined8 *)(lVar3 + 8),local_14c,0x1a);
    FUN_004169a0(param_4,local_14c);
  }
  FUN_00410f20(plVar4);
  FUN_00410f20(lVar3);
  FUN_00414480(local_res18);
  return cVar2;
}

