/* Ghidra address: 017b7320 */
/* Ghidra symbol: FUN_017b7320 */


longlong FUN_017b7320(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_017b58f0(local_res8,0);
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong **)(local_res8 + 0x40) = plVar4;
  (**(code **)(*plVar4 + 0xa8))(plVar4,param_5);
  cVar1 = FUN_00609f90(*(undefined8 *)(local_res8 + 0x40));
  if (cVar1 != '\x06') {
    uVar5 = FUN_0044d710(&PTR_FUN_005f2298,1,PTR_PTR_02002740);
    FUN_004134c0(uVar5);
  }
  uVar2 = FUN_017b8330(local_res8,*(undefined8 *)(local_res8 + 0x40));
  *(undefined4 *)(local_res8 + 0x58) = uVar2;
  if (param_6 != '\0') {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(local_res8 + 0x50) = uVar5;
  }
  uVar5 = FUN_00498310(param_3,param_4);
  *(undefined8 *)(local_res8 + 0x18) = uVar5;
  *(undefined1 *)(local_res8 + 0x60) = 1;
  *(undefined1 *)(local_res8 + 0x61) = 1;
  *(undefined1 *)(local_res8 + 99) = 0;
  *(undefined1 *)(local_res8 + 100) = 0;
  uVar2 = (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x60))
                    (*(longlong **)(local_res8 + 0x40));
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x48))
                    (*(longlong **)(local_res8 + 0x40));
  uVar5 = FUN_007d5160(&PTR_FUN_006441f8,1,uVar2,uVar3);
  *(undefined8 *)(local_res8 + 0x68) = uVar5;
  FUN_007d5ad0(uVar5,*(undefined8 *)(local_res8 + 0x40),0x1fffffff);
  uVar5 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar5;
  FUN_0060bbf0(uVar5,6);
  FUN_007d5cb0(*(undefined8 *)(local_res8 + 0x68),0,*(undefined8 *)(local_res8 + 0x48));
  uVar2 = (**(code **)(**(longlong **)(local_res8 + 0x48) + 0x60))
                    (*(longlong **)(local_res8 + 0x48));
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 0x48) + 0x48))
                    (*(longlong **)(local_res8 + 0x48));
  uVar5 = FUN_00498310(uVar2,uVar3);
  *(undefined8 *)(local_res8 + 0x70) = uVar5;
  *(undefined4 *)(local_res8 + 0x7c) = 0x3f800000;
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

