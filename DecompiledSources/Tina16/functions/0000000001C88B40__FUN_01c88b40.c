/* Ghidra address: 01c88b40 */
/* Ghidra symbol: FUN_01c88b40 */


void FUN_01c88b40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(param_1 + 0x27c1) != '\0') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488), lVar1 != 0)) {
    FUN_0131f840(*(undefined8 *)(param_1 + 0x27a8),lVar1);
    if (*(longlong *)PTR_DAT_02002fa8 != 0) {
      FUN_00f51220(*(undefined8 *)PTR_DAT_02002fa8);
    }
    uVar2 = FUN_016ed7b0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0x488),6);
    FUN_00b8fd60(&local_18,uVar2,2,0,1);
    FUN_00416ba0(&local_10,L" t = ",local_18);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1550),local_10);
    FUN_00b8fd60(&local_28,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488) + 0xf20),2,0
                 ,1);
    FUN_00416cd0(&local_20,3,L" Tsim = ",local_28,&DAT_01c88d80);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x1558),local_20);
    if (*PTR_DAT_020052b8 != '\0') {
      uVar2 = FUN_016ed7b0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0x488),6);
      FUN_00b8fd60(&local_38,uVar2,2,0,1);
      FUN_00416ba0(&local_30,L" t = ",local_38);
      FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,local_30,0);
    }
    *(undefined1 *)(param_1 + 0x1830) = 1;
  }
  FUN_00414560(&local_38,6);
  return;
}

