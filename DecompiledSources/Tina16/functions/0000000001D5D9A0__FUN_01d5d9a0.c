/* Ghidra address: 01d5d9a0 */
/* Ghidra symbol: FUN_01d5d9a0 */


void FUN_01d5d9a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar10;
  undefined1 local_c8 [40];
  undefined8 local_a0;
  char local_91;
  char *local_90 [15];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_a0 = 0;
  if (*(char *)(param_2 + 0x339) != '\0') {
    FUN_016eacf0(param_1,10,4);
  }
  FUN_016ea450(local_c8,param_1,2);
  FUN_004169a0(&local_a0,local_c8);
  FUN_016ee260(param_1,local_90,0x28,0);
  uVar2 = FUN_016ebdc0(param_1);
  uVar2 = FUN_01b08260(param_2,uVar2,local_a0,&DAT_01ffebd0,CONCAT44(uVar10,1),0);
  *(undefined8 *)(local_90[0] + 0x20) = uVar2;
  uVar2 = FUN_016eb0a0(param_1,3);
  *(undefined8 *)(local_90[0] + 8) = uVar2;
  uVar2 = FUN_00b90650(0x3ff0000000000000,*(undefined8 *)(local_90[0] + 8));
  uVar2 = FUN_00b90620(0,uVar2);
  *(undefined8 *)(local_90[0] + 8) = uVar2;
  uVar2 = FUN_016ea920(param_1,4,5,&local_91);
  if (local_91 == '\x01') {
    uVar2 = 0x3fb999999999999a;
  }
  else if (local_91 == '\x02') {
    uVar2 = 0x3f847ae147ae147b;
  }
  else if (local_91 == '\x03') {
    uVar2 = 0x3f1a36e2eb1c432d;
  }
  else if (local_91 == '\x04') {
    uVar2 = 0x3e45798ee2308c3a;
  }
  uVar2 = FUN_00b90650(0x3ff0000000000000,uVar2);
  dVar3 = (double)FUN_00b90620(0,uVar2);
  cVar1 = FUN_016eacf0(param_1,5,2);
  dVar4 = (double)FUN_016eb0a0(param_1,6);
  if (cVar1 == '\0') {
    dVar5 = (double)FUN_016ed770(param_2);
    dVar4 = dVar4 + dVar5;
  }
  dVar4 = dVar4 - 27.0;
  dVar5 = (double)FUN_016eb0a0(param_1,7);
  dVar6 = (double)FUN_016eb0a0(param_1,8);
  dVar7 = (double)FUN_016eb0a0(param_1,9);
  dVar8 = (double)FUN_016eb990(param_1,1,1);
  dVar9 = (double)FUN_016eb990(param_1,1,2);
  if (dVar7 == 0.0) {
    dVar4 = dVar5 * dVar4 + dVar6 * dVar4 * dVar4 + 1.0;
  }
  else {
    dVar4 = (double)FUN_00c42670(0x3ff028f5c28f5c29,dVar7 * dVar4);
  }
  *(double *)(local_90[0] + 0x18) = 1.0 / (dVar8 * dVar4);
  cVar1 = FUN_016e9e80(param_1,1);
  *local_90[0] = cVar1;
  *(double *)(local_90[0] + 0x10) =
       ((1.0 / dVar9 - *(double *)(local_90[0] + 0x18)) / 1.486e-06) * 100.0;
  FUN_016ebe60(param_1,*local_90[0] + '\x01',1,2,1);
  FUN_016ed320(param_1,*local_90[0] + '\x01',0,
               *(double *)(local_90[0] + 0x18) + (*(double *)(local_90[0] + 0x10) * dVar3) / 100.0,0
              );
  FUN_016e9f40(param_1,FUN_01d5d830);
  FUN_00414480(&local_a0);
  return;
}

