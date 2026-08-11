/* Ghidra address: 01d75ad0 */
/* Ghidra symbol: FUN_01d75ad0 */


void FUN_01d75ad0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int unaff_ESI;
  undefined1 *local_b8;
  int local_b0 [33];
  char local_2a;
  char local_29 [9];
  
  puVar5 = (undefined1 *)FUN_00dd1b70(0,&PTR_FUN_01d752c8);
  local_b8 = puVar5;
  uVar2 = FUN_016ebc30(param_1,1);
  *puVar5 = uVar2;
  FUN_016ebdc0(param_1);
  uVar3 = FUN_01d03160();
  if (uVar3 < 0x580) {
    if (uVar3 == 0x57f) {
      unaff_ESI = 0xc;
    }
    else if (uVar3 == 0x57d) {
      unaff_ESI = 8;
    }
    else if (uVar3 == 0x57e) {
      unaff_ESI = 10;
    }
  }
  else if (uVar3 == 0x580) {
    unaff_ESI = 0xe;
  }
  else if (uVar3 == 0x581) {
    unaff_ESI = 0x10;
  }
  *(int *)(puVar5 + 0x9c) = unaff_ESI;
  iVar4 = 0;
  if (-1 < unaff_ESI + -1) {
    piVar6 = local_b0;
    iVar7 = unaff_ESI;
    do {
      *piVar6 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  cVar1 = (char)unaff_ESI;
  local_29[0] = '\x01';
  local_2a = cVar1 + '\x06';
  FUN_01d753e0(puVar5 + 0x10,local_b0,unaff_ESI + 1,unaff_ESI + 2,cVar1 + '\x04',cVar1 + '\x03',
               cVar1 + '\x05',local_29,&local_2a);
  FUN_016e9e20(param_1,local_29[0] + -1);
  FUN_016e9cd0(param_1,(local_2a - (cVar1 + '\x05')) + -1);
  FUN_01d75730(puVar5 + 0x10,param_1,param_2);
  FUN_016e9f40(param_1,FUN_01d75a30);
  FUN_016ea050(param_1,&local_b8,8);
  FUN_016e9f50(param_1,FUN_01d75ab0);
  return;
}

