/* Ghidra address: 00aff200 */
/* Ghidra symbol: FUN_00aff200 */


void FUN_00aff200(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x448))
            (*(longlong **)(param_1 + 0x60),local_40,**(undefined8 **)(param_1 + 0x68),0);
  FUN_00414ad0(*(undefined8 *)(param_1 + 0x68),local_40[0]);
  uVar4 = FUN_00414480(local_20);
  uVar5 = FUN_00414480(&local_28);
  FUN_00a28910(**(undefined8 **)(param_1 + 0x68),uVar4,uVar5);
  iVar2 = FUN_00416db0(local_20[0],&DAT_00aff40c);
  if (iVar2 == 0) {
    uVar4 = FUN_00414480(&local_30);
    FUN_00a29560(&local_28,**(undefined8 **)(param_1 + 0x68),uVar4);
    uVar3 = FUN_00a7c330(local_30);
    uVar4 = FUN_00a7cbc0(&LAB_00a7c208,PTR_IMAGE_DOS_HEADER_0200c280,local_28,uVar3);
    **(undefined8 **)(param_1 + 0x70) = uVar4;
  }
  else {
    FUN_00441640(&local_48,**(undefined8 **)(param_1 + 0x68));
    FUN_00414ad0(*(undefined8 *)(param_1 + 0x78),local_48);
    cVar1 = FUN_00440a20(**(undefined8 **)(param_1 + 0x68),1);
    if (cVar1 != '\0') {
      FUN_009ec440(&local_50,**(undefined8 **)(param_1 + 0x68));
      uVar4 = FUN_004b9860(&PTR_FUN_0047c498,1,local_50,0x20);
      **(undefined8 **)(param_1 + 0x70) = uVar4;
    }
  }
  if (**(longlong **)(param_1 + 0x70) != 0) {
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x778),
                 **(undefined8 **)(param_1 + 0x70));
  }
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,3);
  return;
}

