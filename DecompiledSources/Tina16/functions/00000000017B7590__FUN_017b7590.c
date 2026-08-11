/* Ghidra address: 017b7590 */
/* Ghidra symbol: FUN_017b7590 */


longlong FUN_017b7590(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 param_5,undefined1 param_6,undefined1 param_7,byte param_8,
                     int param_9,int param_10,undefined8 param_11,undefined4 param_12)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_017b58f0(local_res8,0);
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*local_20 + 8))(local_20,param_9);
  FUN_004b89e0(local_20,param_11,(longlong)param_9);
  FUN_004b6dc0(local_20,0);
  plVar5 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong **)(local_res8 + 0x40) = plVar5;
  (**(code **)(*plVar5 + 0xc0))(plVar5,local_20);
  if (param_10 != 0) {
    FUN_017b1970(&param_11,param_9);
    FUN_004b9ec0(local_20);
    (**(code **)(*local_20 + 8))(local_20,param_10);
    FUN_004b89e0(local_20,param_11,(longlong)param_10);
    FUN_004b6dc0(local_20,0);
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(longlong **)(local_res8 + 0x50) = plVar5;
    (**(code **)(*plVar5 + 0xe8))(plVar5,local_20);
  }
  FUN_00410f20(local_20);
  *(int *)(local_res8 + 0x58) = param_9;
  *(int *)(local_res8 + 0x5c) = param_10;
  uVar6 = FUN_00498310(param_3,param_4);
  *(undefined8 *)(local_res8 + 0x18) = uVar6;
  *(undefined1 *)(local_res8 + 0x60) = param_5;
  *(undefined1 *)(local_res8 + 0x61) = param_6;
  *(undefined1 *)(local_res8 + 99) = param_7;
  *(byte *)(local_res8 + 100) = param_8;
  uVar7 = (ulonglong)param_8;
  local_24 = FUN_00c3c500(*(undefined1 *)(local_res8 + 0x60),*(undefined1 *)(local_res8 + 0x61),
                          *(undefined1 *)(local_res8 + 99),uVar7);
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x60))
                    (*(longlong **)(local_res8 + 0x40));
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x48))
                    (*(longlong **)(local_res8 + 0x40));
  uVar6 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar7 >> 8),1) & 0xffffffff,
                       (longlong)iVar2 / (longlong)local_24 & 0xffffffff,uVar3);
  *(undefined8 *)(local_res8 + 0x68) = uVar6;
  FUN_007d5ad0(uVar6,*(undefined8 *)(local_res8 + 0x40),0x1fffffff);
  uVar6 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar6;
  FUN_0060bbf0(uVar6,6);
  FUN_007d5cb0(*(undefined8 *)(local_res8 + 0x68),0,*(undefined8 *)(local_res8 + 0x48));
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 0x48) + 0x60))
                    (*(longlong **)(local_res8 + 0x48));
  uVar4 = (**(code **)(**(longlong **)(local_res8 + 0x48) + 0x48))
                    (*(longlong **)(local_res8 + 0x48));
  uVar6 = FUN_00498310(uVar3,uVar4);
  *(undefined8 *)(local_res8 + 0x70) = uVar6;
  *(undefined4 *)(local_res8 + 0x7c) = param_12;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

