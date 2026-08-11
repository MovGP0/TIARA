/* Ghidra address: 0143b130 */
/* Ghidra symbol: FUN_0143b130 */


void FUN_0143b130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  FUN_0084e320(*(undefined8 *)(param_1 + 0x700),local_40,0,param_4);
  FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_48,1,param_4);
  FUN_00416cd0(local_30,3,local_40[0],&LAB_0143b2d8,local_48);
  plVar2 = (longlong *)
           FUN_01439280(&PTR_FUN_01438b08,1,*(undefined8 *)PTR_DAT_02004030,local_30[0],
                        *(undefined8 *)(param_1 + 0x730));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x90))(*(longlong **)(param_1 + 0x718));
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x730) + 0x10);
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x730),iVar4);
        FUN_004169a0(&local_50,lVar3 + 0xc);
        (**(code **)(**(longlong **)(param_1 + 0x718) + 0x78))
                  (*(longlong **)(param_1 + 0x718),local_50);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  return;
}

