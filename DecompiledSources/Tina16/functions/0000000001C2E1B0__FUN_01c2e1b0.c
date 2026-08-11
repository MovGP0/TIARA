/* Ghidra address: 01c2e1b0 */
/* Ghidra symbol: FUN_01c2e1b0 */


void FUN_01c2e1b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [256];
  undefined8 local_20 [2];
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_20[0] = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  DAT_021114ec = 0;
  do {
    DAT_021114f0 = 0;
    do {
      (&DAT_02111b90)[(longlong)DAT_021114f0 * 0x41 + (longlong)DAT_021114ec * 0x4100] = 0;
      DAT_021114f0 = DAT_021114f0 + 1;
    } while (DAT_021114f0 != 0x100);
    DAT_021114ec = DAT_021114ec + 1;
  } while (DAT_021114ec != 0x401);
  DAT_021114ec = 0;
  do {
    DAT_021114f0 = 0;
    do {
      (&DAT_03155c90)[(longlong)DAT_021114f0 * 0x41 + (longlong)DAT_021114ec * 0x4100] = 0;
      DAT_021114f0 = DAT_021114f0 + 1;
    } while (DAT_021114f0 != 0x100);
    DAT_021114ec = DAT_021114ec + 1;
  } while (DAT_021114ec != 0x100);
  DAT_021114f8 = -1;
  DAT_021114fc = 1;
  DAT_02111500 = -1;
  DAT_02111504 = 1;
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\SLM.KEY");
  FUN_0040cf10(&DAT_02111560,local_20[0],0);
  FUN_00409900();
  FUN_0040c9e0(&DAT_02111560);
  FUN_00409900();
  do {
    FUN_0040e200(&DAT_02111560,&DAT_02111510);
    FUN_0040e480(&DAT_02111560);
    FUN_00409900();
    while (iVar2 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111510,1), 0 < iVar2) {
      uVar4 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111510,1);
      FUN_00416e20(&DAT_02111510,uVar4,1);
    }
    while (iVar2 = FUN_004170c0(&DAT_01c2ec6c,DAT_02111510,1), 0 < iVar2) {
      uVar4 = FUN_004170c0(&DAT_01c2ec6c,DAT_02111510,1);
      FUN_00416e20(&DAT_02111510,uVar4,1);
      FUN_00416ea0(&DAT_01c2ec5c,&DAT_02111510,uVar4);
    }
    iVar2 = 0;
    if (DAT_02111510 != (short *)0x0) {
      iVar2 = *(int *)(DAT_02111510 + -2);
    }
    if ((1 < iVar2) && (*DAT_02111510 == 0x23)) {
      DAT_03565e40 = '\x01';
      DAT_021114f8 = DAT_021114f8 + 1;
      FUN_00416910(local_120,DAT_02111510,0xff);
      FUN_00415020(&DAT_02111b90 + (longlong)DAT_021114f8 * 0x4100,local_120,0x40);
      DAT_021114fc = 1;
    }
    if (*DAT_02111510 == 0x24) {
      DAT_03565e40 = '\x02';
      DAT_02111500 = DAT_02111500 + 1;
      FUN_00414ad0(&DAT_02111538,DAT_02111510);
      FUN_01c29c00(&DAT_02111538,1,1);
      FUN_01c29c10(&DAT_01c2ec7c,&DAT_02111538,1);
      FUN_00416910(local_120,DAT_02111538,0xff);
      FUN_00415020(&DAT_03155c90 + (longlong)DAT_02111500 * 0x4100,local_120,0x40);
      DAT_02111504 = 1;
    }
    if ((*DAT_02111510 != 0x23) && (*DAT_02111510 != 0x24)) {
      if (DAT_03565e40 == '\x01') {
        FUN_00416910(local_120,DAT_02111510,0xff);
        FUN_00415020(&DAT_02111b90 + (longlong)DAT_021114fc * 0x41 + (longlong)DAT_021114f8 * 0x4100
                     ,local_120,0x40);
        DAT_021114fc = DAT_021114fc + 1;
      }
      else if (DAT_03565e40 == '\x02') {
        FUN_00416910(local_120,DAT_02111510,0xff);
        FUN_00415020(&DAT_03155c90 + (longlong)DAT_02111504 * 0x41 + (longlong)DAT_02111500 * 0x4100
                     ,local_120,0x40);
        DAT_02111504 = DAT_02111504 + 1;
      }
    }
    cVar1 = FUN_0040d1c0(&DAT_02111560);
    FUN_00409900();
  } while (cVar1 == '\0');
  FUN_0040d150(&DAT_02111560);
  FUN_00409900();
  FUN_00416ba0(&local_128,*(undefined8 *)PTR_DAT_020049a0,L"\\SLM.BTN");
  FUN_0040cf10(&DAT_02111858,local_128,0);
  FUN_00409900();
  FUN_0040c9e0(&DAT_02111858);
  FUN_00409900();
  (**(code **)(*DAT_03565e30 + 0x90))(DAT_03565e30);
  do {
    FUN_0040e200(&DAT_02111858,&DAT_02111528);
    FUN_0040e480(&DAT_02111858);
    FUN_00409900();
    FUN_00414ad0(&DAT_02111530,DAT_02111528);
    uVar3 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111530,1);
    uVar4 = 0;
    if (DAT_02111530 != 0) {
      uVar4 = *(undefined4 *)(DAT_02111530 + -4);
    }
    FUN_01c29c00(&DAT_02111530,uVar3,uVar4);
    iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
    if (iVar2 == -1) {
      (**(code **)(*DAT_03565e30 + 0x78))(DAT_03565e30,DAT_02111530);
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      *(undefined8 *)(&DAT_03565cf8 + (longlong)iVar2 * 8) = uVar5;
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      *(undefined8 *)(&DAT_03565d60 + (longlong)iVar2 * 8) = uVar5;
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      *(undefined8 *)(&DAT_03565dc8 + (longlong)iVar2 * 8) = uVar5;
    }
    uVar4 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111528,1);
    FUN_01c29c00(&DAT_02111528,1,uVar4);
    if (*DAT_02111528 == 0x2b) {
      FUN_00416e20(&DAT_02111528,1,1);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      (**(code **)(**(longlong **)(&DAT_03565cf8 + (longlong)iVar2 * 8) + 0x78))
                (*(longlong **)(&DAT_03565cf8 + (longlong)iVar2 * 8),DAT_02111528);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      (**(code **)(**(longlong **)(&DAT_03565dc8 + (longlong)iVar2 * 8) + 0x78))
                (*(longlong **)(&DAT_03565dc8 + (longlong)iVar2 * 8),DAT_02111528);
    }
    else if (*DAT_02111528 == 0x21) {
      FUN_00416e20(&DAT_02111528,1,1);
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      (**(code **)(**(longlong **)(&DAT_03565d60 + (longlong)iVar2 * 8) + 0x78))
                (*(longlong **)(&DAT_03565d60 + (longlong)iVar2 * 8),DAT_02111528);
    }
    else {
      iVar2 = (**(code **)(*DAT_03565e30 + 0xb0))(DAT_03565e30,DAT_02111530);
      (**(code **)(**(longlong **)(&DAT_03565dc8 + (longlong)iVar2 * 8) + 0x78))
                (*(longlong **)(&DAT_03565dc8 + (longlong)iVar2 * 8),DAT_02111528);
    }
    cVar1 = FUN_0040d1c0(&DAT_02111858);
    FUN_00409900();
  } while (cVar1 == '\0');
  FUN_0040d150(&DAT_02111858);
  FUN_00409900();
  FUN_00416ba0(&local_130,*(undefined8 *)PTR_DAT_020049a0,L"\\SLM.BKW");
  FUN_0040cf10(&DAT_02111858,local_130,0);
  FUN_00409900();
  FUN_0040c9e0(&DAT_02111858);
  FUN_00409900();
  (**(code **)(*DAT_03565e38 + 0x90))(DAT_03565e38);
  do {
    FUN_0040e200(&DAT_02111858,&DAT_02111528);
    FUN_0040e480(&DAT_02111858);
    FUN_00409900();
    FUN_00414ad0(&DAT_02111530,DAT_02111528);
    uVar3 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111530,1);
    uVar4 = 0;
    if (DAT_02111530 != 0) {
      uVar4 = *(undefined4 *)(DAT_02111530 + -4);
    }
    FUN_01c29c00(&DAT_02111530,uVar3,uVar4);
    iVar2 = (**(code **)(*DAT_03565e38 + 0xb0))(DAT_03565e38,DAT_02111530);
    if (iVar2 == -1) {
      (**(code **)(*DAT_03565e38 + 0x78))(DAT_03565e38,DAT_02111530);
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = (**(code **)(*DAT_03565e38 + 0xb0))(DAT_03565e38,DAT_02111530);
      (&DAT_03565c90)[iVar2] = uVar5;
    }
    uVar4 = FUN_004170c0(&DAT_01c2ec5c,DAT_02111528,1);
    FUN_01c29c00(&DAT_02111528,1,uVar4);
    iVar2 = (**(code **)(*DAT_03565e38 + 0xb0))(DAT_03565e38,DAT_02111530);
    (**(code **)(*(longlong *)(&DAT_03565c90)[iVar2] + 0x78))
              ((longlong *)(&DAT_03565c90)[iVar2],DAT_02111528);
    cVar1 = FUN_0040d1c0(&DAT_02111858);
    FUN_00409900();
  } while (cVar1 == '\0');
  FUN_0040d150(&DAT_02111858);
  FUN_00409900();
  (**(code **)(*DAT_03565e68 + 0x90))(DAT_03565e68);
  FUN_00416ba0(&local_138,*(undefined8 *)PTR_DAT_020049a0,L"\\SLM.AEN");
  (**(code **)(*DAT_03565e68 + 0xd8))(DAT_03565e68,local_138);
  FUN_00414560(&local_138,3);
  FUN_00414480(local_20);
  return;
}

